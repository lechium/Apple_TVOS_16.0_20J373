//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString;

@interface PBSuggestedUserProfileManagerServiceListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000181366
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001810b3
- (void)invalidate;	// IMP=0x0010000000181031
- (void)activate;	// IMP=0x0010000000180ed2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

