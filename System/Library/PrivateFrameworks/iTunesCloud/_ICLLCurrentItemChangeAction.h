//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLCurrentItemChangeAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cd175
- (unsigned long long)hash;	// IMP=0x00000000000cd158
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cd0be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd046
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cd022
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cd015
- (id)dictionaryRepresentation;	// IMP=0x00000000000ccfb9
- (id)description;	// IMP=0x00000000000ccf0a

@end

