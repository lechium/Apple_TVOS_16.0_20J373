//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSSortDescriptor;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface PRSharingChoice : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_scores;	// 16 = 0x10
    double _lastScoreReportMachContinuousTime;	// 24 = 0x18
    double _lastBigHeadFirstReportTime;	// 32 = 0x20
    NSData *_lastBigHeadMacAddress;	// 40 = 0x28
    NSArray *_lastReportedScores;	// 48 = 0x30
    struct SharingImportanceMeasurements _measurements;	// 56 = 0x38
    NSSortDescriptor *_scoreSortDescriptor;	// 80 = 0x50
    struct unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> _estimatorRangeOnly;	// 88 = 0x58
    _Bool _useRegionBasedEstimator;	// 96 = 0x60
    _Bool _currentlyInitiating;	// 97 = 0x61
    CDUnknownBlockType _newScoresHandler;	// 104 = 0x68
    NSObject<OS_os_log> *_logger;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000027e3e
- (void).cxx_destruct;	// IMP=0x0000000000027dcb
@property(retain, nonatomic) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
@property _Bool currentlyInitiating; // @synthesize currentlyInitiating=_currentlyInitiating;
@property _Bool useRegionBasedEstimator; // @synthesize useRegionBasedEstimator=_useRegionBasedEstimator;
@property(copy) CDUnknownBlockType newScoresHandler; // @synthesize newScoresHandler=_newScoresHandler;
- (void)updateScoresWithNewMeasurement:(const void *)arg1;	// IMP=0x0000000000027c28
- (void)updateScoresForTime:(double)arg1;	// IMP=0x0000000000027899
- (void)reportScoresToClientAlways:(_Bool)arg1 useUpdatedScoreList:(_Bool)arg2 currentMachContTime:(double)arg3;	// IMP=0x0000000000026b8b
- (void)heartbeatTimeout:(double)arg1 currentMachContTime:(double)arg2 useUpdatedScores:(_Bool)arg3;	// IMP=0x0000000000026ac2
- (void)addBluetoothProximityEstimate:(struct NeighborMeasurements)arg1 currentMachContTime:(double)arg2;	// IMP=0x0000000000026a06
- (void)addRoseSolutions:(id)arg1 currentMachContTime:(double)arg2;	// IMP=0x0000000000025da1
- (void)createEstimators;	// IMP=0x0000000000025d0c
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000025bfe
- (id)init;	// IMP=0x0000000000025bc0

@end

