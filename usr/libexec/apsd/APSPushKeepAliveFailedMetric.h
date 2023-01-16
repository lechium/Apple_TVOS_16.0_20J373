//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushKeepAliveFailedMetric : NSObject
{
    NSString *_guid;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    unsigned int _connectionType;	// 20 = 0x14
    NSNumber *_linkQuality;	// 24 = 0x18
    unsigned int _dualChannelState;	// 32 = 0x20
    NSNumber *_timeSinceLastSuccessfulKeepAlive;	// 40 = 0x28
    NSNumber *_timeSinceConnected;	// 48 = 0x30
    NSNumber *_lastKeepAliveInterval;	// 56 = 0x38
    NSNumber *;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000403b8
@property(readonly, nonatomic) NSNumber *currentGrowthStage; // @synthesize currentGrowthStage=_currentGrowthStage;
@property(readonly, nonatomic) NSNumber *lastKeepAliveInterval; // @synthesize lastKeepAliveInterval=_lastKeepAliveInterval;
@property(readonly, nonatomic) NSNumber *timeSinceConnected; // @synthesize timeSinceConnected=_timeSinceConnected;
@property(readonly, nonatomic) NSNumber *timeSinceLastSuccessfulKeepAlive; // @synthesize timeSinceLastSuccessfulKeepAlive=_timeSinceLastSuccessfulKeepAlive;
@property(readonly, nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 version:(unsigned int)arg2 connectionType:(unsigned int)arg3 linkQuality:(id)arg4 dualChannelState:(unsigned int)arg5 timeSinceLastSuccessfulKeepAlive:(id)arg6 timeSinceConnected:(id)arg7 lastKeepAliveInterval:(id)arg8 currentGrowthStage:(id)arg9;	// IMP=0x001000000003ff0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

