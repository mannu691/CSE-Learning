#include <bits\stdc++.h>
#include "../../libs/json.hpp"
using json = nlohmann::json;
using namespace std;

int main(int argc, char *argv[])
{
    ifstream f("tasks.json");
    json data;
    try
    {
        f >> data;
    }
    catch (const std::exception &e)
    {
        data = json::array();
    }
    f.close();

    if (argc < 2)
        cout << "Invalid Input" << endl;
    else
    {
        try
        {
            string cmd = argv[1];
            if (cmd == "add" && argc > 2)
            {
                data.push_back({
                    {"label", (string)argv[2]},
                    {"status", "todo"},
                });
                cout << "Added Element with ID:" << data.size() - 1 << endl;
            }
            else if (cmd == "delete" && argc > 2)
            {
                data.erase(stoi(argv[2]));
                cout << "Deleted Element with ID:" << argv[2] << endl;
            }
            else if (cmd == "update" && argc > 3)
            {
                data.at(stoi(argv[2])).at("label") = argv[3];
                cout << "Updated Element with ID:" << argv[2] << endl;
            }
            else if (cmd == "mark-in-progress" && argc > 2)
            {
                data.at(stoi(argv[2])).at("status") = "in-progress";
                cout << "Marked Element with ID:" << argv[2] << endl;
            }
            else if (cmd == "mark-done" && argc > 2)
            {
                data.at(stoi(argv[2])).at("status") = "done";
                cout << "Marked Element with ID:" << argv[2] << endl;
            }
            else if (cmd == "mark-todo" && argc > 2)
            {
                data.at(stoi(argv[2])).at("status") = "todo";
                cout << "Marked Element with ID:" << argv[2] << endl;
            }
            else if ((string)cmd == "list")
            {
                if(data.size()==0){
                 cout<<"Task List is Empty!" <<endl;
                }
                for (auto &[key, val] : data.items())
                {
                    if (argc > 2 && (string)argv[2] != val.value("status", ""))
                        continue;
                    cout << "[" << key << "] " << "[" << val.value("status", "") << "] " << val.value("label", "") << endl;
                }
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
        }
        catch (const std::exception &e)
        {
            cout << e.what() << endl;
            cout << "Couldn't Perform the Operation" << endl;
        }
    }

    ofstream of("tasks.json", ios::out | ios::trunc);
    of << setw(4) << data << endl;
    of.close();
    return 0;
}