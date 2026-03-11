//Client->Invoker(Remote)
//|
//Command
//|
//----------------
//|              |
//LightOnCommand   LightOffCommand
//|
//Receiver
//Light

/*
Flow:

User
↓
RemoteControl(Invoker)
↓
Command Object
↓
Receiver(Light)

The remote does not know how the light works.
It only calls execute().
*/
#include <iostream>
using namespace std;
//1. create receiver object
class Light {
public:
    void turnOn() {
        cout << "Light is ON" << endl;
    }

    void turnOff() {
        cout << "Light is OFF" << endl;
    }
};
//2. create command interface
class Command {
public:
    virtual void execute() = 0;
};
//3. create concreate commands
class LightOnCommand : public Command {
private:
    Light* light;

public:
    LightOnCommand(Light* l) {
        light = l;
    }

    void execute() {
        light->turnOn();
    }
};
class LightOffCommand : public Command {
private:
    Light* light;

public:
    LightOffCommand(Light* l) {
        light = l;
    }

    void execute() {
        light->turnOff();
    }
};
//4. Create invoker
class RemoteControl {
private:
    Command* command;

public:
    void setCommand(Command* cmd) {
        command = cmd;
    }

    void pressButton() {
        command->execute();
    }
};

//5. client main functions
int main() {

    Light livingRoomLight;

    LightOnCommand lightOn(&livingRoomLight);
    LightOffCommand lightOff(&livingRoomLight);

    RemoteControl remote;

    remote.setCommand(&lightOn);
    remote.pressButton();

    remote.setCommand(&lightOff);
    remote.pressButton();

    return 0;
}