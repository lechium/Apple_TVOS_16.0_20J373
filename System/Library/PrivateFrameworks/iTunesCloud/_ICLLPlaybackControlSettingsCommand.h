//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLPlaybackControlSettings;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackControlSettingsCommand : PBCodable
{
    _ICLLPlaybackControlSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000146be
- (unsigned long long)hash;	// IMP=0x00000000000146a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014607
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001458f
- (void)writeTo:(id)arg1;	// IMP=0x000000000001456b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001455e
- (id)dictionaryRepresentation;	// IMP=0x00000000000144d4
- (id)description;	// IMP=0x0000000000014425

@end
