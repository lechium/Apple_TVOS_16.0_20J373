//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSURLRequestInternal : NSObject
{
    struct URLRequest _request;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001c5b67
- (void).cxx_destruct;	// IMP=0x00000000001c5b59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c5af8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c5558
- (unsigned long long)hash;	// IMP=0x00000000001c5548
- (void)dealloc;	// IMP=0x00000000001c5519
- (id)_initWithMessage:(struct __CFHTTPMessage *)arg1 bodyParts:(struct __CFArray *)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(struct __CFURL *)arg5 mutable:(unsigned char)arg6;	// IMP=0x00000000001c5253
- (id)init;	// IMP=0x00000000001c5224
@property(readonly) void *_inner; // @dynamic _inner;

@end

