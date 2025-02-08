#ifndef API_H
#define API_H

// User Management Functions
extern "C" {
    // Adds a user with a specific shell and optional group
    void add_user(const char* username, const char* shell, const char* groups);
    
    // Removes a user
    void remove_user(const char* username);
    
    // Modifies the shell of an existing user
    void modify_user_shell(const char* username, const char* new_shell);
}

// Software Installation Functions
extern "C" {
    // Installs software using a package manager
    void install_software(const char* package_name);
}

// System Command Execution Functions
extern "C" {
    // Executes a system command
    void run_command(const char* command);
}

// LLM Interaction Functions
extern "C" {
    // Sends input to Ollama model and processes the output
    void process_llm_input(const char* input);
    
    // Queries the Ollama model with a prompt and returns the response
    const char* query_ollama(const char* prompt);
}

#endif // API_H

