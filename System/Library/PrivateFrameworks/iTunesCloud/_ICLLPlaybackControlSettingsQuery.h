//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsQuery : PBCodable
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000843e3
- (unsigned long long)hash;	// IMP=0x00000000000843c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008432c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000842b4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000084290
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000084283
- (id)dictionaryRepresentation;	// IMP=0x00000000000841f9
- (id)description;	// IMP=0x000000000008414a

@end
