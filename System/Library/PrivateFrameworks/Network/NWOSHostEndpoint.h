//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWOSHostEndpoint
{
    char *hostname;	// 8 = 0x8
    unsigned short port;	// 16 = 0x10
    unsigned short priority;	// 18 = 0x12
    unsigned short weight;	// 20 = 0x14
    NSObject<OS_dispatch_data> *ech_config;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004c0250
- (unsigned long long)getHash;	// IMP=0x00000000004c01a0
- (id)copyEndpoint;	// IMP=0x00000000004c0140
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x00000000004c00b0
- (char *)createDescription:(_Bool)arg1;	// IMP=0x00000000004bff90
- (void)setEchConfig:(id)arg1;	// IMP=0x00000000004bff70
- (id)echConfig;	// IMP=0x00000000004bff50
- (void)setWeight:(unsigned short)arg1;	// IMP=0x00000000004bff30
- (unsigned short)weight;	// IMP=0x00000000004bff10
- (void)setPriority:(unsigned short)arg1;	// IMP=0x00000000004bfef0
- (unsigned short)priority;	// IMP=0x00000000004bfed0
- (const char *)hostname;	// IMP=0x00000000004bfeb0
- (unsigned short)port;	// IMP=0x00000000004bfe90
- (const char *)domainForPolicy;	// IMP=0x00000000004bfe70
- (id)copyDictionary;	// IMP=0x00000000004bfde0
- (unsigned int)type;	// IMP=0x00000000004bfdd0
- (void)dealloc;	// IMP=0x00000000004bfd70

@end

