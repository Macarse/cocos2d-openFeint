//
//  ASIProgressDelegate.h
//  Part of ASIHTTPRequest -> http://allseeing-i.com/ASIHTTPRequest
//
//  Created by Ben Copsey on 13/04/2010.
//  Copyright 2010 All-Seeing Interactive. All rights reserved.
//

@class OFASIHTTPRequest;

@protocol OFASIProgressDelegate <NSObject>

@optional

// These methods are used to update UIProgressViews (iPhone OS) or NSProgressIndicators (Mac OS X)
// If you are using a custom progress delegate, you may find it easier to implement didReceiveBytes / didSendBytes instead
#if TARGET_OS_IPHONE
- (void)setProgress:(float)newProgress;
#else
- (void)setDoubleValue:(double)newProgress;
- (void)setMaxValue:(double)newMax;
#endif

// Called when the request receives some data - bytes is the length of that data
- (void)request:(OFASIHTTPRequest *)request didReceiveBytes:(long long)bytes;

// Called when the request sends some data
// The first 32KB (128KB on older platforms) of data sent is not included in this amount because of limitations with the CFNetwork API
// bytes may be less than zero if a request needs to remove upload progress (probably because the request needs to run again)
- (void)request:(OFASIHTTPRequest *)request didSendBytes:(long long)bytes;

// Called when a request needs to change the length of the content to download
- (void)request:(OFASIHTTPRequest *)request incrementDownloadSizeBy:(long long)newLength;

// Called when a request needs to change the length of the content to upload
// newLength may be less than zero when a request needs to remove the size of the internal buffer from progress tracking
- (void)request:(OFASIHTTPRequest *)request incrementUploadSizeBy:(long long)newLength;
@end
