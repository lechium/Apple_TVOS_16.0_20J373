//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKClientTokenObject.h"

@class TKSEPKey;

__attribute__((visibility("hidden")))
@interface TKSEPClientTokenObject : TKClientTokenObject
{
    TKSEPKey *_key;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d514
@property(readonly, nonatomic) TKSEPKey *key; // @synthesize key=_key;
- (id)operation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id *)arg5;	// IMP=0x000000000001ca7f
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x000000000001c934
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c1c1
- (id)initWithSession:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001c001

@end

