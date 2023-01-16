//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLActionMessage, _ICLLCommandMessage, _ICLLErrorMessage, _ICLLQueryMessage;

__attribute__((visibility("hidden")))
@interface _ICLLProtocolMessage : PBCodable
{
    _ICLLActionMessage *_action;	// 8 = 0x8
    _ICLLCommandMessage *_command;	// 16 = 0x10
    _ICLLErrorMessage *_error;	// 24 = 0x18
    _ICLLQueryMessage *_query;	// 32 = 0x20
    NSString *_traceId;	// 40 = 0x28
    int _type;	// 48 = 0x30
    CDStruct_f953fb60 _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000171a12
- (unsigned long long)hash;	// IMP=0x000000000017193e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001717a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000171674
- (void)writeTo:(id)arg1;	// IMP=0x00000000001715c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000171204
- (id)dictionaryRepresentation;	// IMP=0x0000000000171014
- (id)description;	// IMP=0x0000000000170f65

@end

