//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _HMFNetAddressIPV6
{
    struct sockaddr_in6 _in6;	// 24 = 0x18
}

- (id)dataUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000004287f
- (id)addressString;	// IMP=0x0000000000042661
- (unsigned long long)addressFamily;	// IMP=0x0000000000042656
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000425a7
- (unsigned long long)hash;	// IMP=0x0000000000042571
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000000042444
- (id)init;	// IMP=0x000000000004239c

@end

