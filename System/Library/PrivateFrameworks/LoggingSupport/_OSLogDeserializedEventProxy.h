//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "OSLogEventProxy.h"

@class NSDictionary, _OSLogEventSerializationMetadata;

__attribute__((visibility("hidden")))
@interface _OSLogDeserializedEventProxy : OSLogEventProxy
{
    _Bool _unixDateNeedsLookup;	// 8 = 0x8
    _Bool _unixTimeZoneNeedsLookup;	// 9 = 0x9
    struct timezone _unixTimeZone;	// 12 = 0xc
    struct timeval _unixDate;	// 24 = 0x18
    _Bool _lossStartUnixDateNeedsLookup;	// 40 = 0x28
    _Bool _lossStartUnixTimeZoneNeedsLookup;	// 41 = 0x29
    struct timeval _lossStartUnixDate;	// 48 = 0x30
    struct timezone _lossStartUnixTimeZone;	// 64 = 0x40
    _Bool _lossEndUnixDateNeedsLookup;	// 72 = 0x48
    _Bool _lossEndUnixTimeZoneNeedsLookup;	// 73 = 0x49
    struct timeval _lossEndUnixDate;	// 80 = 0x50
    struct timezone _lossEndUnixTimeZone;	// 96 = 0x60
    _Bool _needsTypeLookup;	// 104 = 0x68
    NSDictionary *_curEventDictionary;	// 112 = 0x70
    _OSLogEventSerializationMetadata *_metadata;	// 120 = 0x78
    unsigned long long _type;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000467c9
@property(nonatomic) _Bool needsTypeLookup; // @synthesize needsTypeLookup=_needsTypeLookup;
@property(retain, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSDictionary *curEventDictionary; // @synthesize curEventDictionary=_curEventDictionary;
- (id)decomposedMessage;	// IMP=0x00000000000465e1
- (id)backtrace;	// IMP=0x000000000004617a
- (id)_frameForDict:(id)arg1;	// IMP=0x0000000000045ed1
- (CDStruct_0dd72924)lossCount;	// IMP=0x0000000000045d3e
- (struct timezone *)lossEndUnixTimeZone;	// IMP=0x0000000000045bc5
- (struct timeval *)lossEndUnixDate;	// IMP=0x0000000000045a4c
- (struct timezone *)lossStartUnixTimeZone;	// IMP=0x00000000000458d3
- (struct timeval *)lossStartUnixDate;	// IMP=0x000000000004575a
- (id)timeZone;	// IMP=0x000000000004569d
- (id)date;	// IMP=0x00000000000455de
- (struct timezone *)unixTimeZone;	// IMP=0x0000000000045427
- (struct timeval *)unixDate;	// IMP=0x0000000000045270
- (void)_populate_timezone:(struct timezone *)arg1 withDict:(id)arg2;	// IMP=0x0000000000045114
- (void)_populate_timeval:(struct timeval *)arg1 withDict:(id)arg2;	// IMP=0x0000000000044fc9
- (id)bootUUID;	// IMP=0x0000000000044e13
- (const char *)senderImageUUIDBytes;	// IMP=0x0000000000044ce4
- (id)senderImageUUID;	// IMP=0x0000000000044b95
- (const char *)processImageUUIDBytes;	// IMP=0x0000000000044a66
- (id)processImageUUID;	// IMP=0x0000000000044917
- (id)signpostName;	// IMP=0x0000000000044733
- (id)formatString;	// IMP=0x0000000000044521
- (id)category;	// IMP=0x0000000000044323
- (id)subsystem;	// IMP=0x0000000000044125
- (id)sender;	// IMP=0x0000000000043f5f
- (id)senderImagePath;	// IMP=0x0000000000043d99
- (id)process;	// IMP=0x0000000000043bd3
- (id)processImagePath;	// IMP=0x0000000000043a0d
- (id)composedMessage;	// IMP=0x0000000000043847
- (int)processIdentifier;	// IMP=0x0000000000043721
- (unsigned long long)lossEndMachContinuousTimestamp;	// IMP=0x00000000000435de
- (unsigned long long)lossStartMachContinuousTimestamp;	// IMP=0x000000000004349b
- (unsigned long long)creatorProcessUniqueIdentifier;	// IMP=0x0000000000043358
- (unsigned long long)creatorActivityIdentifier;	// IMP=0x0000000000043215
- (unsigned long long)signpostScope;	// IMP=0x00000000000430d2
- (unsigned long long)signpostType;	// IMP=0x0000000000042f8f
- (unsigned long long)signpostIdentifier;	// IMP=0x0000000000042e68
- (unsigned long long)senderImageOffset;	// IMP=0x0000000000042d41
- (unsigned long long)machContinuousTimestamp;	// IMP=0x0000000000042c1a
- (unsigned long long)continuousNanosecondsSinceBoot;	// IMP=0x0000000000042af3
- (unsigned long long)transitionActivityIdentifier;	// IMP=0x00000000000429cc
- (unsigned long long)parentActivityIdentifier;	// IMP=0x00000000000428a5
- (unsigned long long)activityIdentifier;	// IMP=0x000000000004277e
- (unsigned long long)threadIdentifier;	// IMP=0x0000000000042657
- (unsigned long long)traceIdentifier;	// IMP=0x0000000000042530
- (unsigned long long)timeToLive;	// IMP=0x0000000000042409
- (unsigned long long)size;	// IMP=0x00000000000422e2
- (unsigned long long)logType;	// IMP=0x00000000000421bb
- (unsigned long long)type;	// IMP=0x0000000000041ff8
- (void)_resetNeedsLookup;	// IMP=0x0000000000041f67

@end
