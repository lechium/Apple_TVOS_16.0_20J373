//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TASKResponse : PBCodable
{
    NSString *_errorMessage;	// 8 = 0x8
    int _status;	// 16 = 0x10
    unsigned int _taskId;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000004f54d
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004f4aa
- (unsigned long long)hash;	// IMP=0x001000000004f45d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004f3a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004f30f
- (void)copyTo:(id)arg1;	// IMP=0x001000000004f2cb
- (void)writeTo:(id)arg1;	// IMP=0x001000000004f25b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004f24e
- (id)dictionaryRepresentation;	// IMP=0x001000000004ee93
- (id)description;	// IMP=0x001000000004ede4
@property(readonly, nonatomic) _Bool hasErrorMessage;
- (int)StringAsStatus:(id)arg1;	// IMP=0x001000000004ed04
- (id)statusAsString:(int)arg1;	// IMP=0x001000000004ecbb

@end

