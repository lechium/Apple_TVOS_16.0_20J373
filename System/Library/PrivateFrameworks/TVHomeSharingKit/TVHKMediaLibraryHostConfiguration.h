//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryHostConfiguration : NSObject
{
    NSString *_hostName;	// 8 = 0x8
    unsigned long long _port;	// 16 = 0x10
}

+ (id)new;	// IMP=0x0010000000005525
- (void).cxx_destruct;	// IMP=0x00000000000059bf
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005978
- (id)description;	// IMP=0x00000000000058ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000056f6
- (unsigned long long)hash;	// IMP=0x0000000000005641
- (id)initWithHostName:(id)arg1 port:(unsigned long long)arg2;	// IMP=0x00000000000055c3
- (id)init;	// IMP=0x0000000000005554

@end

