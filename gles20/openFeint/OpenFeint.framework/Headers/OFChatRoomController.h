//  Copyright 2009-2010 Aurora Feint, Inc.
// 
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//  	http://www.apache.org/licenses/LICENSE-2.0
//  	
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "OFTableSequenceControllerHelper.h"
#import "OFCustomBottomView.h"
#import "OFRootController.h"

@class OFChatRoomMessageBoxController;
@class OFChatRoomInstance;

@interface OFChatRoomController : OFTableSequenceControllerHelper<OFCustomBottomView, OFKeyboardAdjustment>
{
@private
	OFChatRoomMessageBoxController* mChatRoomMessageBoxController;
	BOOL mIsKeyboardShown;	
	BOOL mHasAppearedBefore;
	BOOL mRoomIsFull;
	BOOL mIsChangingName;
    BOOL mDidScrollToBottom;
	OFChatRoomInstance* roomInstance;
    float mViewOriginYWithoutKeyboardiPad;
    BOOL mIsCustomLoad;
}

@property (nonatomic, retain) OFChatRoomInstance* roomInstance;

- (UIView*)getBottomView;

@end