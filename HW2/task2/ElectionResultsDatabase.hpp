#pragma once

// Add whatever else is required to exist in or out the class
// as well as whatever you think is good to be declared too

class ElectionResultsDatabase
{
    
public:
    
    void addResultsFromFile(const char* filename);
        
    int numberOfSections() const;
    
    int votesForParty(Party) const;
    
    Party winningParty() const;
    
};
