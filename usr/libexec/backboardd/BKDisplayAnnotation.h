//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, BKDisplayAnnotationLocation, BKDisplayAnnotationRenderer, BKDisplayAnnotationStyleSheet, BKNamespaceNode, MISSING_TYPE, NSString;
@protocol BKDisplayAnnotationContent;

@interface BKDisplayAnnotation : NSObject
{
    BKDisplayAnnotationLocation *_location;	// 8 = 0x8
    BKDisplayAnnotationRenderer *_renderer;	// 16 = 0x10
    NSString *_section;	// 24 = 0x18
    long long _subnodeScreenEdgeTreatment;	// 32 = 0x20
    id <BKDisplayAnnotationContent> _content;	// 40 = 0x28
    BKDisplayAnnotationController *_annotationController;	// 48 = 0x30
    MISSING_TYPE *_styleSheet;	// 56 = 0x38
    BKNamespaceNode *_namespaceNode;	// 64 = 0x40
}

+ (id)new;	// IMP=0x004000000006bc36
+ (id)annotationWithRectangleSize:(struct CGSize)arg1;	// IMP=0x001000000006bb42
+ (id)annotationWithEllipseSize:(struct CGSize)arg1;	// IMP=0x001000000006ba4e
+ (id)subannotationWithString:(id)arg1;	// IMP=0x001000000006b9ee
+ (id)annotationWithString:(id)arg1;	// IMP=0x001000000006b8f6
- (void).cxx_destruct;	// IMP=0x002000000006b89b
@property(nonatomic) __weak BKNamespaceNode *namespaceNode; // @synthesize namespaceNode=_namespaceNode;
@property(retain, nonatomic) BKDisplayAnnotationStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(nonatomic) __weak BKDisplayAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(retain, nonatomic) id <BKDisplayAnnotationContent> content; // @synthesize content=_content;
@property(nonatomic) long long subnodeScreenEdgeTreatment; // @synthesize subnodeScreenEdgeTreatment=_subnodeScreenEdgeTreatment;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) BKDisplayAnnotationRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) BKDisplayAnnotationLocation *location; // @synthesize location=_location;
- (void)setStyleModifier:(id)arg1;	// IMP=0x001000000006b7b4
- (void)modifyStyleSheet:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b78a
- (void)setShapeSize:(struct CGSize)arg1;	// IMP=0x001000000006b737
- (void)setString:(id)arg1;	// IMP=0x001000000006b692
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006b380
- (id)description;	// IMP=0x001000000006b36c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000006b2eb
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000006b29b
- (id)succinctDescriptionBuilder;	// IMP=0x001000000006b27f
- (id)succinctDescription;	// IMP=0x001000000006b22f
- (id)_init;	// IMP=0x001000000006b191
- (id)init;	// IMP=0x001000000006b063

@end

