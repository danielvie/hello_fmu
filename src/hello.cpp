#include <iostream>
#include <string>

// FMI 2.0 headers
#include "fmi2Functions.h"

// FMU functions
extern "C" {
    // FMI functions
    const char* fmi2GetVersion() {
        return fmi2Version;
    }

    fmi2Component fmi2Instantiate(
        fmi2String instanceName, 
        fmi2Type fmuType, 
        fmi2String fmuGUID, 
        fmi2String fmuResourceLocation, 
        const fmi2CallbackFunctions* functions, 
        fmi2Boolean visible, 
        fmi2Boolean loggingOn) {
        return (fmi2Component)1; // Dummy handle
    }

    void fmi2FreeInstance(fmi2Component c) {
        // Cleanup code if needed
    }

    fmi2Status fmi2SetupExperiment(
        fmi2Component c, 
        fmi2Boolean toleranceDefined, 
        fmi2Real tolerance, 
        fmi2Real startTime, 
        fmi2Boolean stopTimeDefined, 
        fmi2Real stopTime) {
        return fmi2OK;
    }

    fmi2Status fmi2EnterInitializationMode(fmi2Component c) {
        return fmi2OK;
    }

    fmi2Status fmi2ExitInitializationMode(fmi2Component c) {
        return fmi2OK;
    }

    fmi2Status fmi2DoStep(
        fmi2Component c, 
        fmi2Real currentCommunicationPoint, 
        fmi2Real communicationStepSize, 
        fmi2Boolean noSetFMUStatePriorToCurrentPoint) {
        std::cout << "Hello, World!" << std::endl;
        return fmi2OK;
    }

    // Other required functions
    const char* fmi2GetTypesPlatform() { return "default"; }
    fmi2Status fmi2Terminate(fmi2Component c) { return fmi2OK; }
    fmi2Status fmi2Reset(fmi2Component c) { return fmi2OK; }
}
