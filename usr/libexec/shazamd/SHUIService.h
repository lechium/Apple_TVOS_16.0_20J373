//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/SHService.h>

@class NSString, SHMediaItemPresenter;
@protocol SHServiceDelegate;

@interface SHUIService : SHService
{
    SHMediaItemPresenter *_mediaItemPresenter;	// 8 = 0x8
    id <SHServiceDelegate> _serviceDelegate;	// 16 = 0x10
}

+ (id)machServiceName;	// IMP=0x002000000003baee
+ (void)initializeGlobalServiceState;	// IMP=0x001000000003bae8
- (void).cxx_destruct;	// IMP=0x002000000003bb3d
- (void)setServiceDelegate:(id)arg1;	// IMP=0x001000000003bb29
- (id)serviceDelegate;	// IMP=0x001000000003bb10
- (void)stop;	// IMP=0x001000000003bb0a
- (_Bool)shouldStartWorker:(id)arg1;	// IMP=0x001000000003bb02
- (id)workers;	// IMP=0x001000000003ba64
- (void)workerUpdated:(id)arg1 withRunningState:(_Bool)arg2;	// IMP=0x001000000003b964
@property(readonly, nonatomic) SHMediaItemPresenter *mediaItemPresenter; // @synthesize mediaItemPresenter=_mediaItemPresenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
