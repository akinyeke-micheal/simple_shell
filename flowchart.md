# Basic Shell Flowchart

```mermaid
graph TD;
    Start --> InitializeEnvironmentVariables;
    InitializeEnvironmentVariables --> InitializeCommandLine;
    InitializeCommandLine --> DisplayPrompt;
    DisplayPrompt --> ReadUserInput;
    ReadUserInput --> ParseInput;
    ParseInput --> IsItExit;
    IsItExit --> Exit;
    IsItExit --> ReadUserInput;
    Exit --> Done;
    IsItExit --> ReadUserInput;
    ParseInput --> IsItEnv;
    IsItEnv --> PrintEnvironment;
    IsItEnv --> ReadUserInput;
    PrintEnvironment --> ReadUserInput;
    ParseInput --> IsItBuiltInCommand;
    IsItBuiltInCommand --> ExecuteBuiltInCommand;
    ExecuteBuiltInCommand --> DisplayPromptAgain;
    DisplayPromptAgain --> ReadUserInput;
    IsItBuiltInCommand --> ReadUserInput;
    ParseInput --> IsItFileInput;
    IsItFileInput --> ExecuteCommandsFromFile;
    ExecuteCommandsFromFile --> DisplayOutput;
    DisplayOutput --> DisplayPromptAgain;
    IsItFileInput --> DisplayPromptAgain;
    ParseInput --> ExecuteExternalCommand;
    ExecuteExternalCommand --> DisplayOutput;
    DisplayOutput --> DisplayPromptAgain;
    ExecuteExternalCommand --> DisplayPromptAgain;
