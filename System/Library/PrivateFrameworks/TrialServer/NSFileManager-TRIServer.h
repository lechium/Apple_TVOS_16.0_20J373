//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRIServer)
+ (id)triDiskUsageForDirectory:(id)arg1;	// IMP=0x008000000012fcf1
+ (unsigned long long)triCompressedSizeForFileAtPath:(id)arg1 shouldFault:(_Bool *)arg2;	// IMP=0x008000000012fbad
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;	// IMP=0x008000000012f8a4
+ (id)triTargetPathForSymlink:(id)arg1;	// IMP=0x008000000012f70c
+ (_Bool)triForceRenameWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x008000000012f5ea
+ (_Bool)triRenameOrFaultWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x008000000012f513
+ (id)triPostOrderDescendantDirectoryPathsAtPath:(id)arg1;	// IMP=0x008000000012ef70
- (_Bool)triRemoveCachedANEBinariesForModelsFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012f50b
- (_Bool)triRemoveNestedEmptyDirectoriesAtPath:(id)arg1;	// IMP=0x001000000012f360
- (_Bool)triForceRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012eea2
- (_Bool)triRemoveDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000012edff
@end

