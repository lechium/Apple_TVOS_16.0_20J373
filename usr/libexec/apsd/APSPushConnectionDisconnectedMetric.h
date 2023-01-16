//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushConnectionDisconnectedMetric : NSObject
{
    NSString *_guid;	// 8 = 0x8
    unsigned int _connectionType;	// 16 = 0x10
    NSNumber *_linkQuality;	// 24 = 0x18
    unsigned int _error;	// 32 = 0x20
    unsigned int _sslError;	// 36 = 0x24
    NSNumber *_genericError;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001c5fd
@property(readonly, nonatomic) NSNumber *genericError; // @synthesize genericError=_genericError;
@property(readonly, nonatomic) unsigned int sslError; // @synthesize sslError=_sslError;
@property(readonly, nonatomic) unsigned int error; // @synthesize error=_error;
@property(readonly, nonatomic) NSNumber *linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 connectionType:(unsigned int)arg2 linkQuality:(id)arg3 error:(unsigned int)arg4 sslError:(unsigned int)arg5 genericError:(id)arg6;	// IMP=0x001000000001c2a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

