//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PKDAnnotationStore : NSObject
{
    NSURL *_annotationsURL;	// 8 = 0x8
    NSMutableDictionary *_annotations;	// 16 = 0x10
}

+ (id)globalURL;	// IMP=0x0040000000017128
+ (id)confstrURL:(int)arg1;	// IMP=0x0010000000017026
+ (id)defaultDatabaseURL;	// IMP=0x0010000000016e34
- (void).cxx_destruct;	// IMP=0x002000000001717e
@property(retain, nonatomic) NSMutableDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) NSURL *annotationsURL; // @synthesize annotationsURL=_annotationsURL;
- (_Bool)saveDb:(id *)arg1;	// IMP=0x0010000000016cd9
- (_Bool)loadDb:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016b4d
- (void)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x001000000001676f
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x00100000000166cd
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x001000000001664a
- (id)initWithDatabase:(id)arg1;	// IMP=0x00100000000163ef

@end

