//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWOSCustomEndpoint
{
    NSObject<OS_dispatch_data> *data;	// 8 = 0x8
    CDUnknownBlockType resolver_block;	// 16 = 0x10
    unsigned int type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002fe6c0
- (unsigned long long)getHash;	// IMP=0x00000000002fe560
- (id)copyEndpoint;	// IMP=0x00000000002fe530
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x00000000002fe490
- (char *)createDescription:(_Bool)arg1;	// IMP=0x00000000002fe430
- (id)copyDictionary;	// IMP=0x00000000002fe1a0
- (unsigned int)type;	// IMP=0x00000000002fe190

@end

