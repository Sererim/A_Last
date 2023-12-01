class Schedule{

private:
    int id;
    int idRobot;
    int location;
    enum status{
        cleaning,
        vaccum,
        full
    };

public:
    void setId(int newId) {
        id = newId;
    }

    int getId() {
        return id;
    }

    void setIdRobot(int newIdRobot) {
        idRobot = newIdRobot;
    }

    int getIdRobot() {
        return idRobot;
    }

    void setLocation(int newLocation) {
        location = newLocation;
    }

    int getLocation() {
        return location;
    }

    void setStatus(status newStatus) {
        // Assuming the status enum is defined outside the class
        status = newStatus;
    }

    status getStatus() {
        return status;
    }
};
