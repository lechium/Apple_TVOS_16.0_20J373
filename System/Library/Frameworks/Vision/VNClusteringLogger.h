//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNClusteringLogger : NSObject
{
    _Bool _logEnabled;	// 8 = 0x8
    NSURL *_logFolderURL;	// 16 = 0x10
    NSURL *_logFileURL;	// 24 = 0x18
    NSString *_fileNameBase;	// 32 = 0x20
}

+ (id)currentDateTime;	// IMP=0x006000000001702e
+ (id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2;	// IMP=0x0060000000016ecb
+ (void)appendString:(id)arg1 toLogFile:(id)arg2;	// IMP=0x0060000000016cca
+ (_Bool)isLogEnabled;	// IMP=0x0060000000016c9f
- (void).cxx_destruct;	// IMP=0x0000000000016c6c
@property(readonly) NSString *fileNameBase; // @synthesize fileNameBase=_fileNameBase;
@property(readonly) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(readonly) NSURL *logFileURL; // @synthesize logFileURL=_logFileURL;
@property(readonly) NSURL *logFolderURL; // @synthesize logFolderURL=_logFolderURL;
- (void)logClusterLookupMapL1:(const void *)arg1;	// IMP=0x0000000000016c0c
- (void)logClusterMapL1:(const void *)arg1;	// IMP=0x0000000000016bf3
- (void)logClusterLookupMapL0:(const void *)arg1;	// IMP=0x0000000000016bda
- (void)logClusterMapL0:(const void *)arg1;	// IMP=0x0000000000016bc1
- (void)logClusterMap:(const void *)arg1 level:(id)arg2;	// IMP=0x00000000000169a2
- (void)logString:(id)arg1;	// IMP=0x000000000001690f
- (void)resetFileNameURLWithCurentDateTime;	// IMP=0x0000000000016837
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2;	// IMP=0x000000000001681e
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2 logFileNameBase:(id)arg3;	// IMP=0x0000000000016728

@end

