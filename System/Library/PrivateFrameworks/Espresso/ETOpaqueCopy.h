//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ETOpaqueCopy : NSObject
{
    struct shared_ptr<Espresso::abstract_blob_container> blob;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000004a1569
- (void).cxx_destruct;	// IMP=0x00000000004a155b
- (const void *)getBlob;	// IMP=0x00000000004a1551
- (id)initWithAbstractBlobContainer:(void *)arg1;	// IMP=0x00000000004a1495

@end

