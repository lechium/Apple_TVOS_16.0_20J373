//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSpeakerRecognitionAssetMetaUpdateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000088fb
- (void)_notifyObserver:(id)arg1;	// IMP=0x0020000000008c41
- (void)_didReceiveSpeakerRecognitionAssetMetaData;	// IMP=0x0010000000008b61
- (void)_stopMonitoring;	// IMP=0x0010000000008abe
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000000899f
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x0010000000008992
- (id)init;	// IMP=0x0010000000008950

@end

