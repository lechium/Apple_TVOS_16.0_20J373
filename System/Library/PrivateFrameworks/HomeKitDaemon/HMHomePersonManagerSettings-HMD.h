//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHomePersonManagerSettings.h>

@class NSString;

@interface HMHomePersonManagerSettings (HMD)
- (id)createHMHomePersonManagerSettings;	// IMP=0x00200000004981f2
- (id)createHMPhotosPersonManagerSettings;	// IMP=0x00200000004981ea
- (id)createHMIHomePersonManagerSettings;	// IMP=0x002000000049817f
- (id)createHMIExternalPersonManagerSettings;	// IMP=0x0020000000498177
@property(readonly) _Bool requiresPersistentStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
