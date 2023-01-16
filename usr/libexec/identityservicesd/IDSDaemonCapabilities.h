//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSDaemonCapabilities : NSObject
{
    int _supportedServicesToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0020000000382510
@property(nonatomic) int supportedServicesToken; // @synthesize supportedServicesToken=_supportedServicesToken;
- (void)_deferredUpdateCapabilities;	// IMP=0x0010000000382e10
- (void)carrierBundleInformationDidChange;	// IMP=0x0010000000382d50
- (void)_setupTokens;	// IMP=0x0010000000382d10
- (void)_listenForMGChanges;	// IMP=0x0010000000382d00
- (void)_updateCapabilities;	// IMP=0x00100000003826d0
- (void)dealloc;	// IMP=0x0010000000382690
- (id)init;	// IMP=0x00100000003825d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
