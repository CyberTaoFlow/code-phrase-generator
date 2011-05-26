//
//  Code_Phrase_GeneratorAppDelegate.h
//  Code Phrase Generator
//
//  Created by Scott J. Roberts on 5/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Code_Phrase_GeneratorAppDelegate : NSObject <NSApplicationDelegate> {
	
	NSWindow *window;
	NSTextField* textField;
	NSTextField* prefixField;
	NSMutableArray* wordlist;
}

@property (assign) IBOutlet NSWindow *window;
@property (retain) IBOutlet NSTextField* textField;
@property (retain) IBOutlet NSTextField* prefixField;

@property (retain) NSMutableArray* wordlist;

// Actions
- (IBAction) displayCodePhrase:(id)sender;

// Class Methods (Prolly should be a protocol)
- (NSString*) generateWord;
- (NSString*) generatePhrase;
- (NSString*) generatePhrases;

@end
