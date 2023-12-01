#include <string>

class Robot{

private:
    int id;
    int idGroupUser;
    int resources;
    std::string model;
    std::string fabricNumber;
    std::string version;
    std::string macaddr;
    std::string comment;

    enum status{
        cleaning,
        vaccum,
        full
    };

public:
    // Setter Functions
    void setId(int newId) {
        id = newId;
    }

    void setIdGroupUser(int newIdGroupUser) {
        idGroupUser = newIdGroupUser;
    }

    void setResources(int newResources) {
        resources = newResources;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    void setFabricNumber(const std::string& newFabricNumber) {
        fabricNumber = newFabricNumber;
    }

    void setVersion(const std::string& newVersion) {
        version = newVersion;
    }

    void setMacaddr(const std::string& newMacaddr) {
        macaddr = newMacaddr;
    }

    void setComment(const std::string& newComment) {
        comment = newComment;
    }

    // Getter Functions
    int getId() const {
        return id;
    }

    int getIdGroupUser() const {
        return idGroupUser;
    }

    int getResources() const {
        return resources;
    }

    const std::string& getModel() const {
        return model;
    }

    const std::string& getFabricNumber() const {
        return fabricNumber;
    }

    const std::string& getVersion() const {
        return version;
    }

    const std::string& getMacaddr() const {
        return macaddr;
    }

    const std::string& getComment() const {
        return comment;
    }
};



}