//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PathCodec : NSObject
{
}

+ (struct RoutingPathLeg)decompress:(const void *)arg1;	// IMP=0x0080000000295e79
+ (struct RoutingPathLeg)compress:(const void *)arg1;	// IMP=0x0080000000295e5e
+ (void)decompressInPlace:(void *)arg1;	// IMP=0x0080000000295e51
+ (void)compressInPlace:(void *)arg1;	// IMP=0x0080000000295e44
+ (id)descriptionForRoutingPathLeg:(const void *)arg1;	// IMP=0x0080000000295c0a
+ (id)dataForRoutingPathLeg:(const void *)arg1;	// IMP=0x0080000000295bae
+ (struct RoutingPathLeg)routingPathLegForData:(id)arg1;	// IMP=0x0080000000295b19

@end

