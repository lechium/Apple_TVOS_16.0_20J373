//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitOperationInfo : PBCodable
{
    unsigned int _operationGroupIndex;	// 8 = 0x8
    NSString *_operationId;	// 16 = 0x10
    NSString *_operationType;	// 24 = 0x18
    _Bool _operationTriggered;	// 32 = 0x20
    struct {
        unsigned int operationGroupIndex:1;
        unsigned int operationTriggered:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000006432
@property(nonatomic) unsigned int operationGroupIndex; // @synthesize operationGroupIndex=_operationGroupIndex;
@property(nonatomic) _Bool operationTriggered; // @synthesize operationTriggered=_operationTriggered;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000006328
- (unsigned long long)hash;	// IMP=0x000000000000628d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006167
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000608c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000005fec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000005f40
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000005f33
- (id)dictionaryRepresentation;	// IMP=0x0000000000005b0f
- (id)description;	// IMP=0x0000000000005a60
@property(nonatomic) _Bool hasOperationGroupIndex;
@property(nonatomic) _Bool hasOperationTriggered;
@property(readonly, nonatomic) _Bool hasOperationType;
@property(readonly, nonatomic) _Bool hasOperationId;

@end
