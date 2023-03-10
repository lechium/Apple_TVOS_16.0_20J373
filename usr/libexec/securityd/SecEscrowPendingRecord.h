//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData, NSString;

@interface SecEscrowPendingRecord : PBCodable
{
    unsigned long long _lastCloudServicesTriggerTime;	// 8 = 0x8
    unsigned long long _lastEscrowAttemptTime;	// 16 = 0x10
    unsigned long long _triggerRequestTime;	// 24 = 0x18
    unsigned long long _uploadRetries;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSData *_serializedPrerecord;	// 48 = 0x30
    NSData *_serializedReason;	// 56 = 0x38
    NSString *_uuid;	// 64 = 0x40
    _Bool _certCached;	// 72 = 0x48
    _Bool _uploadCompleted;	// 73 = 0x49
    MISSING_TYPE *_has;	// 76 = 0x4c
}

+ (id)loadAllFromKeychain:(id *)arg1;	// IMP=0x002000000015379a
+ (id)loadFromKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000153480
- (void).cxx_destruct;	// IMP=0x00200000001ccea7
@property(retain, nonatomic) NSData *serializedReason; // @synthesize serializedReason=_serializedReason;
@property(nonatomic) unsigned long long triggerRequestTime; // @synthesize triggerRequestTime=_triggerRequestTime;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) unsigned long long uploadRetries; // @synthesize uploadRetries=_uploadRetries;
@property(nonatomic) _Bool uploadCompleted; // @synthesize uploadCompleted=_uploadCompleted;
@property(nonatomic) unsigned long long lastEscrowAttemptTime; // @synthesize lastEscrowAttemptTime=_lastEscrowAttemptTime;
@property(nonatomic) unsigned long long lastCloudServicesTriggerTime; // @synthesize lastCloudServicesTriggerTime=_lastCloudServicesTriggerTime;
@property(retain, nonatomic) NSData *serializedPrerecord; // @synthesize serializedPrerecord=_serializedPrerecord;
@property(nonatomic) _Bool certCached; // @synthesize certCached=_certCached;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ccc58
- (unsigned long long)hash;	// IMP=0x00100000001ccafc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001cc89e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001cc700
- (void)copyTo:(id)arg1;	// IMP=0x00100000001cc5a9
- (void)writeTo:(id)arg1;	// IMP=0x00100000001cc444
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001cbf04
- (id)dictionaryRepresentation;	// IMP=0x00100000001cbc19
- (id)description;	// IMP=0x00100000001cbb6a
@property(readonly, nonatomic) _Bool hasSerializedReason;
@property(nonatomic) _Bool hasTriggerRequestTime;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(nonatomic) _Bool hasUploadRetries;
@property(nonatomic) _Bool hasUploadCompleted;
@property(nonatomic) _Bool hasLastEscrowAttemptTime;
@property(nonatomic) _Bool hasLastCloudServicesTriggerTime;
@property(readonly, nonatomic) _Bool hasSerializedPrerecord;
@property(nonatomic) _Bool hasCertCached;
@property(readonly, nonatomic) _Bool hasUuid;
- (_Bool)deleteFromKeychain:(id *)arg1;	// IMP=0x00100000001531bb
- (_Bool)saveToKeychain:(id *)arg1;	// IMP=0x0010000000152b9b
- (_Bool)escrowAttemptedWithinLastSeconds:(double)arg1;	// IMP=0x00100000001533c7

@end

