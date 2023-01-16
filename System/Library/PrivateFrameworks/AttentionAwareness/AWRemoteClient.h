//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWScheduler, NSArray, NSSet, NSString, NSXPCConnection;
@protocol AWFrameworkClient, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWRemoteClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWScheduler *_scheduler;	// 16 = 0x10
    id <AWFrameworkClient> _proxy;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    unsigned long long _tagIndex;	// 40 = 0x28
    unsigned long long _notificationMask;	// 48 = 0x30
    unsigned long long _eventMask;	// 56 = 0x38
    unsigned long long _attentionLostEventMask;	// 64 = 0x40
    _Bool _sampleWhileAbsent;	// 72 = 0x48
    _Bool _retroactiveTimeoutMode;	// 73 = 0x49
    _Bool _continuousFaceDetectMode;	// 74 = 0x4a
    _Bool _samplingSuppressedNotificationSent;	// 75 = 0x4b
    NSArray *_attentionLostTimeoutsSec;	// 80 = 0x50
    NSSet *_allowedHIDEventsForRemoteEvent;	// 88 = 0x58
    int _clientIndex;	// 96 = 0x60
    CDStruct_264b1ab3 *_clientState;	// 104 = 0x68
    AWAttentionEvent *_lastEvent;	// 112 = 0x70
    AWAttentionAwarenessConfiguration *_lastConfig;	// 120 = 0x78
    _Bool _invalid;	// 128 = 0x80
    NSString *_identifier;	// 136 = 0x88
    unsigned long long _samplingInterval;	// 144 = 0x90
    unsigned long long _samplingDelay;	// 152 = 0x98
    unsigned long long _streamingStartTime;	// 160 = 0xa0
    double _streamingDuration;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000000df16
@property(nonatomic) double streamingDuration; // @synthesize streamingDuration=_streamingDuration;
@property(nonatomic) unsigned long long streamingStartTime; // @synthesize streamingStartTime=_streamingStartTime;
@property(readonly, nonatomic) int clientIndex; // @synthesize clientIndex=_clientIndex;
@property(readonly, nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) unsigned long long samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)cancelFaceDetectStreamWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dcd6
- (void)streamFaceDetectEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dbf0
- (_Bool)isStreamingClient;	// IMP=0x000000000000dbe7
- (void)notifyStreamingClientOfInterruption:(unsigned long long)arg1;	// IMP=0x000000000000dbd5
- (void)notifyClientOfStreamingEvent:(id)arg1;	// IMP=0x000000000000dbbf
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000db32
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1;	// IMP=0x000000000000d723
- (void)updateDeadlinesForTime:(unsigned long long)arg1;	// IMP=0x000000000000caba
- (unsigned long long)nextSampleTime;	// IMP=0x000000000000c87d
- (unsigned long long)nextAttentionLostTime:(_Bool *)arg1;	// IMP=0x000000000000c3ba
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c2c8
- (void)resetAttentionLostTimerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c253
- (void)_resetAttentionLostTimer;	// IMP=0x000000000000c0bc
- (void)getLastEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c02f
- (_Bool)_interestedInHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 metadata:(CDUnion_4b9e79fd *)arg3;	// IMP=0x000000000000bc49
- (void)notifyHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000000000bbe5
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000bbd0
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadata:(CDUnion_4b9e79fd *)arg3;	// IMP=0x000000000000b423
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000b3b4
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x000000000000b193
- (void)deliverEvent:(id)arg1;	// IMP=0x000000000000af8d
- (void)deliverNotification:(unsigned long long)arg1;	// IMP=0x000000000000adfd
- (void)setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000acc5
- (void)reevaluateConfig;	// IMP=0x000000000000ab32
- (_Bool)_setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000a05e
- (_Bool)_isSamplingClient;	// IMP=0x000000000000a048
- (unsigned long long)_activeEventMask;	// IMP=0x000000000000a01d
- (void)invalidate;	// IMP=0x0000000000009fd2
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009d94
- (id)connection;	// IMP=0x0000000000009d86
- (id)description;	// IMP=0x0000000000009ba8
- (void)initializeClientState;	// IMP=0x0000000000009700
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 clientIndex:(int)arg4 scheduler:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000093f4

@end
