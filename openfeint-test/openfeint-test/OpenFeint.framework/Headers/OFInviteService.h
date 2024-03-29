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

#import "OFService.h"
#import "OFInvocation.h"

@class OFInvite, OFInviteDefinition, OFUser;

@interface OFInviteService : OFService

OPENFEINT_DECLARE_AS_SERVICE(OFInviteService);

+ (OFRequestHandle*)getDefaultInviteDefinitionForApplicationInvocation:(OFInvocation*)_onSuccess onFailureInvocation:(OFInvocation*)_onFailure;
+ (OFRequestHandle*)getInviteDefinition:(NSString*)inviteIdentifier onSuccessInvocation:(OFInvocation*)_onSuccess onFailureInvocation:(OFInvocation*)_onFailure;
+ (OFRequestHandle*)sendInvite:(OFInviteDefinition*)inviteDefinition withMessage:(NSString*)userMessage toUsers:(NSArray*)users onSuccessInvocation:(OFInvocation*)_onSuccess onFailureInvocation:(OFInvocation*)_onFailure;
+ (void)getInvitesForUser:(OFUser*)user pageIndex:(unsigned int)pageIndex onSuccessInvocation:(OFInvocation*)_onSuccess onFailureInvocation:(OFInvocation*)_onFailure;
+ (void)ignoreInvite:(NSString*)inviteResourceId onSuccessInvocation:(OFInvocation*)_onSuccess onFailureInvocation:(OFInvocation*)_onFailure;
#ifdef OF_PREMIUM
+ (void)checkUnfulfilledInvites;
#endif
////////////////////////////////////////////////////////////
///
/// displaySendInviteModal
/// 
/// @param inviteIdentifier			The invite identifier of the invite definition as seen in the developer dashboard
///									You may use nil for the default invite definition.
///
////////////////////////////////////////////////////////////
+ (void)displaySendInviteModal:(NSString*)inviteIdentifier;

@end
