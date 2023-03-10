//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImpl
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isHearstConnected;	// 16 = 0x10
    _Bool _isHearstRouted;	// 17 = 0x11
    _Bool _isJarvisConnected;	// 18 = 0x12
}

- (void).cxx_destruct;	// IMP=0x0020000000054953
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x001000000005494d
- (void)_systemControllerDied:(id)arg1;	// IMP=0x0010000000054846
- (void)_notifyJarvisConnectionState:(_Bool)arg1;	// IMP=0x00100000000546e6
- (void)_notifyHearstRoutedState:(_Bool)arg1;	// IMP=0x0010000000054591
- (void)_notifyHearstConnectionState:(_Bool)arg1;	// IMP=0x0010000000054441
- (_Bool)_fetchJarvisConnectionState;	// IMP=0x0010000000054439
- (_Bool)_fetchHearstRoutedState;	// IMP=0x0010000000054431
- (_Bool)_fetchHearstConnectionState;	// IMP=0x0010000000054429
- (void);	// IMP=0x00100000000543aa
- (void)_startObservingAudioRouteChange;	// IMP=0x00100000000543a4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000054255
- (void)carPlayIsConnectedDidChange:(id)arg1;	// IMP=0x0010000000054175
- (void)carPlayAuxStreamSupportDidChange:(id)arg1;	// IMP=0x001000000005406c
- (void)pickableRoutesDidChange:(id)arg1;	// IMP=0x0010000000053f5f
- (void)preferredExternalRouteDidChange:(id)arg1;	// IMP=0x0010000000053e52
- (_Bool)carPlayConnected;	// IMP=0x0010000000053e4a
- (_Bool)jarvisConnected;	// IMP=0x0010000000053d96
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053ce1
- (_Bool)hearstRouted;	// IMP=0x0010000000053c2d
- (void)getHearstRouted:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053b78
- (_Bool)hearstConnected;	// IMP=0x0010000000053ac4
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053a0f
- (id)init;	// IMP=0x0010000000053977

@end

