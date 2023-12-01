#include <string>


class User{
private:
    int id;
    std::string login;
    std::string hashPassword;

public:
    int getId() const {
        return id;
    }

    void setId(int value){
        id = value;
    }

    std::string getLogin() const {
        return login;
    }

    void setLogin(std::string name) {
        login = name;
    }

    std::string getPassword() const {
        return hashPassword;
    }

    void setPassword(std::string password) {
        hashPassword = password;
    }
};
