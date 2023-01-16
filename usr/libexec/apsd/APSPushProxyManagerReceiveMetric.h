//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushProxyManagerReceiveMetric : NSObject
{
    NSString *_guid;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    long long _messageCommand;	// 24 = 0x18
    _Bool _isNearby;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003ef92
@property(readonly, nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long messageCommand; // @synthesize messageCommand=_messageCommand;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 messageCommand:(long long)arg2 topic:(id)arg3 isNearby:(_Bool)arg4;	// IMP=0x001000000003ed1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

