//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSystemShellSentinel, BSServiceConnectionListener, NSString;
@protocol OS_dispatch_queue;

@interface BKSystemShellControlServiceListener : NSObject
{
    BSServiceConnectionListener *_connectionListener;	// 8 = 0x8
    BKSystemShellSentinel *_systemShellSentinel;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000701e7
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x001000000006ff9b
- (void)activate;	// IMP=0x001000000006ff85
- (id)initWithSentinel:(id)arg1;	// IMP=0x001000000006fe21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

