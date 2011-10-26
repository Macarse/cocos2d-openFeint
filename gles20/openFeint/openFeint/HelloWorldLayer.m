//
//  HelloWorldLayer.m
//  openFeint
//
//  Created by Carlos Sessa on 10/26/11.
//  Copyright NASA Trained Monkeys 2011. All rights reserved.
//


// Import the interfaces
#import "HelloWorldLayer.h"
#import "MyOFDelegate.h"
#import "OpenFeint.h"

// HelloWorldLayer implementation
@implementation HelloWorldLayer

+(CCScene *) scene
{
	// 'scene' is an autorelease object.
	CCScene *scene = [CCScene node];
	
	// 'layer' is an autorelease object.
	HelloWorldLayer *layer = [HelloWorldLayer node];
	
	// add layer as a child to scene
	[scene addChild: layer];
	
	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
-(id) init
{
	// always call "super" init
	// Apple recommends to re-assign "self" with the "super" return value
	if( (self=[super init])) {
		
		// create and initialize a Label
		CCLabelTTF *label = [CCLabelTTF labelWithString:@"Hello World" fontName:@"Marker Felt" fontSize:64];

		// ask director the the window size
		CGSize size = [[CCDirector sharedDirector] winSize];
	
		// position the label on the center of the screen
		label.position =  ccp( size.width /2 , size.height/2 );
		
		// add the label as a child to this Layer
		[self addChild: label];

        MyOFDelegate *ofDelegate = [MyOFDelegate new];
        OFDelegatesContainer* delegates = [OFDelegatesContainer containerWithOpenFeintDelegate:ofDelegate];
        
        NSDictionary* settings = [NSDictionary dictionaryWithObjectsAndKeys:
                                  [NSNumber numberWithInt:UIInterfaceOrientationLandscapeLeft], OpenFeintSettingDashboardOrientation,
                                  @"of-test", OpenFeintSettingShortDisplayName, 
                                  [NSNumber numberWithBool:NO], OpenFeintSettingEnablePushNotifications,
                                  [NSNumber numberWithBool:YES], OpenFeintSettingDevelopmentMode,
                                  [NSNumber numberWithBool:YES], OpenFeintSettingDisableUserGeneratedContent,
                                  nil];
        
        
        [OpenFeint initializeWithProductKey:@"QxjCVWll10mMFUEbjc5Rhw"
                                  andSecret:@"37dIdr4TZ3Z9oPjRMAkAzpMelF2JB4uOt9bG1kNzE"
                             andDisplayName:@"of-test"
                                andSettings:settings
                               andDelegates:delegates];

	}
	return self;
}

- (void)onEnter {
	[[CCTouchDispatcher sharedDispatcher] addTargetedDelegate:self priority:0 swallowsTouches:YES];
	[super onEnter];
}

- (void)onExit {
	[[CCTouchDispatcher sharedDispatcher] removeDelegate:self];
	[super onExit];
}

- (BOOL)ccTouchBegan:(UITouch *)touch withEvent:(UIEvent *)event
{
    [OpenFeint launchDashboard];
    return YES;
}

// on "dealloc" you need to release all your retained objects
- (void) dealloc
{
	// in case you have something to dealloc, do it in this method
	// in this particular example nothing needs to be released.
	// cocos2d will automatically release all the children (Label)
	
	// don't forget to call "super dealloc"
	[super dealloc];
}
@end
