//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, VCIDRScheduler;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkVideoStreamController : NSObject
{
    float _startTime;	// 8 = 0x8
    float _currentFrameTime;	// 12 = 0xc
    id _delegate;	// 16 = 0x10
    NSMutableDictionary *_videoStreams;	// 24 = 0x18
    NSMutableDictionary *_streamInfoMap;	// 32 = 0x20
    NSMutableDictionary *_activeVideoStreams;	// 40 = 0x28
    NSMutableSet *_streamToPause;	// 48 = 0x30
    NSMutableSet *_streamToResume;	// 56 = 0x38
    NSMutableDictionary *_streamScheduleWifi;	// 64 = 0x40
    NSMutableDictionary *_streamScheduleCell;	// 72 = 0x48
    NSMutableDictionary *_currentStreamSchedule;	// 80 = 0x50
    NSMutableDictionary *_pendingVideoStreams;	// 88 = 0x58
    VCIDRScheduler *_schedulerWifi;	// 96 = 0x60
    VCIDRScheduler *_schedulerCell;	// 104 = 0x68
    _Bool _pendingStreamsUpdated;	// 112 = 0x70
    struct _opaque_pthread_mutex_t _mutex;	// 120 = 0x78
    double _pendingKeyFrameGenerationStartTime;	// 184 = 0xb8
    NSMutableArray *_streamsPendingKeyFrameGeneration;	// 192 = 0xc0
    NSMutableArray *_streamResetIDR;	// 200 = 0xc8
    NSArray *_streamIDsWifi;	// 208 = 0xd0
    NSArray *_streamIDsCell;	// 216 = 0xd8
    unsigned int _captureFrameRate;	// 224 = 0xe0
    _Bool _dynamicVideoPriorityEnabled;	// 228 = 0xe4
    _Bool _streamsUseRTCP;	// 229 = 0xe5
    NSDictionary *_cachedActiveVideoStreams;	// 232 = 0xe8
    struct opaqueRTCReporting *_reportingAgent;	// 240 = 0xf0
}

@property(nonatomic) _Bool dynamicVideoPriorityEnabled; // @synthesize dynamicVideoPriorityEnabled=_dynamicVideoPriorityEnabled;
@property(nonatomic) float currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(copy, nonatomic) NSArray *streamIDsWifi; // @synthesize streamIDsWifi=_streamIDsWifi;
@property(copy, nonatomic) NSArray *streamIDsCell; // @synthesize streamIDsCell=_streamIDsCell;
@property unsigned int captureFrameRate; // @synthesize captureFrameRate=_captureFrameRate;
@property(copy, nonatomic) NSDictionary *pendingVideoStreams; // @synthesize pendingVideoStreams=_pendingVideoStreams;
- (_Bool)filterPendingTemporalStreams;	// IMP=0x00000000000867f2
- (void)restart;	// IMP=0x00000000000865a2
- (void)unlock;	// IMP=0x0000000000086594
- (void)lock;	// IMP=0x0000000000086586
- (id)schedulerStreamWithVideoStream:(id)arg1;	// IMP=0x00000000000864f1
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)arg1;	// IMP=0x0000000000086365
- (id)getMultiwayConfigForStreamID:(id)arg1;	// IMP=0x000000000008616e
- (void)handleStreamsResetIDR;	// IMP=0x0000000000085bbb
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)arg1 shouldRemoveFromPendingArray:(_Bool *)arg2;	// IMP=0x000000000008542f
- (void)handleStreamsPendingKeyFrameGeneration;	// IMP=0x0000000000085173
- (_Bool)pauseStreams;	// IMP=0x0000000000084d83
- (_Bool)shouldGenerateIDRWithStreamSchedule:(id)arg1;	// IMP=0x0000000000084773
- (_Bool)resumeStreams;	// IMP=0x0000000000084145
- (id)delegate;	// IMP=0x0000000000084137
- (void)initilizeStreamInfoMapWithStreamInfos:(id)arg1;	// IMP=0x0000000000083cd9
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)arg1;	// IMP=0x00000000000838f6
- (_Bool)setStreamsUseRTCPWithStreamInfos:(id)arg1;	// IMP=0x00000000000832ec
- (void)generateKeyFrameWithStreamID:(id)arg1;	// IMP=0x0000000000083282
- (void)setIsLocalOnCellular:(_Bool)arg1 cappedVideoStreamIDs:(id)arg2;	// IMP=0x0000000000082af7
- (void)printPendingKeyFrameWarningOnThresholdTimeElapsedWithCurrentFrameTime:(float)arg1;	// IMP=0x00000000000824c3
- (void)selectVideoStreamForVideoPriority;	// IMP=0x00000000000821f6
- (void)setCachedActiveVideoStreams:(id)arg1;	// IMP=0x0000000000080c71
@property(readonly) NSDictionary *activeVideoStreams;
- (void)dealloc;	// IMP=0x0000000000080b24
- (id)initWithVideoStreams:(id)arg1 streamInfos:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3 delegate:(id)arg4;	// IMP=0x00000000000807b9

@end

