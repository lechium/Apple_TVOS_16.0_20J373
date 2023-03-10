//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebGeolocationProviderIOS;

__attribute__((visibility("hidden")))
@interface _WebCoreLocationUpdateThreadingProxy : NSObject
{
    WebGeolocationProviderIOS *_provider;	// 8 = 0x8
}

- (void)resetGeolocation;	// IMP=0x00000000000fdcc0
- (void)errorOccurred:(id)arg1;	// IMP=0x00000000000fdc50
- (void)positionChanged:(void *)arg1;	// IMP=0x00000000000fdaa0
- (void)geolocationAuthorizationDenied;	// IMP=0x00000000000fda30
- (void)geolocationAuthorizationGranted;	// IMP=0x00000000000fd9c0
- (id)initWithProvider:(id)arg1;	// IMP=0x00000000000fd980

@end

