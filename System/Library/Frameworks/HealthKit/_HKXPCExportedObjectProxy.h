//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKXPCExportedObjectProxy : NSObject
{
    id _weakExportedObject;	// 8 = 0x8
    Class _weakExportedObjectClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ed5f8
@property(retain, nonatomic) Class weakExportedObjectClass; // @synthesize weakExportedObjectClass=_weakExportedObjectClass;
@property(nonatomic) __weak id weakExportedObject; // @synthesize weakExportedObject=_weakExportedObject;
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000001ed55c
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000001ed4c5

@end

