//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NWOSURLEndpoint
{
    struct __CFURL *url_ref;	// 8 = 0x8
    unsigned short port;	// 16 = 0x10
    char *url;	// 24 = 0x18
    char *scheme;	// 32 = 0x20
    char *hostname;	// 40 = 0x28
    char *path;	// 48 = 0x30
    char *sanitized_url;	// 56 = 0x38
    char url_hash[9];	// 64 = 0x40
    unsigned int inferred_port:1;	// 73 = 0x49
    unsigned int __pad_bits:7;	// 73 = 0x49
}

- (unsigned long long)getHash;	// IMP=0x0000000000591ce0
- (id)copyEndpoint;	// IMP=0x0000000000591cb0
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x0000000000591c30
- (char *)createDescription:(_Bool)arg1;	// IMP=0x0000000000591b40
- (const char *)domainForPolicy;	// IMP=0x0000000000591b20
- (id)copyDictionary;	// IMP=0x0000000000591aa0
- (unsigned short)port;	// IMP=0x0000000000591a80
- (const char *)hostname;	// IMP=0x0000000000591a60
- (unsigned int)type;	// IMP=0x0000000000591a50
- (void)dealloc;	// IMP=0x0000000000591960

@end

