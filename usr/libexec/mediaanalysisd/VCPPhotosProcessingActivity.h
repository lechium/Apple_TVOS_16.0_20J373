//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPPhotosProcessingActivity
{
}

+ (_Bool)enabled;	// IMP=0x0010000000007880
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000088bb
+ (unsigned long long)taskID;	// IMP=0x0010000000008897
+ (_Bool)enabledByDefault;	// IMP=0x0010000000008873
+ (const char *)identifier;	// IMP=0x001000000000884f
+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x00100000000087e0
- (void)execute:(id)arg1;	// IMP=0x0040000000007903
- (id)criteria;	// IMP=0x001000000000779c
- (id)init;	// IMP=0x001000000000774b

@end
