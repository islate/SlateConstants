//
//  SlateConstants.h
//  SlateCore
//
//  Created by yizelin on 12-3-30.
//  Copyright (c) 2012年 islate. All rights reserved.
//

#ifndef Slate_Constants_h
#define Slate_Constants_h

#define SINGLETON_H(foo) + (instancetype)foo;

#define SINGLETON_M(foo) + (instancetype)foo {\
static id _sharedInstance = nil;\
static dispatch_once_t once = 0;\
dispatch_once(&once, ^{\
_sharedInstance = [self new];\
});\
return _sharedInstance;\
}

#define RGB(r, g, b) [UIColor colorWithRed:(CGFloat)r / 255.0 green:(CGFloat)g / 255.0 blue:(CGFloat)b / 255.0 alpha:1.0]
#define RGBA(r, g, b, a) [UIColor colorWithRed:(CGFloat)r / 255.0 green:(CGFloat)g / 255.0 blue:(CGFloat)b / 255.0 alpha:(CGFloat)a]

#define COLOR(array) (array.count < 3) ? [UIColor clearColor] : ( (array.count < 4) ? RGB([[array objectAtIndex:0] floatValue], [[array objectAtIndex:1] floatValue], [[array objectAtIndex:2] floatValue]) : RGBA([[array objectAtIndex:0] floatValue], [[array objectAtIndex:1] floatValue], [[array objectAtIndex:2] floatValue], [[array objectAtIndex:3] floatValue]) )
#define FRAME(array) ((array.count < 4) ? CGRectZero : CGRectMake([[array objectAtIndex:0] floatValue], [[array objectAtIndex:1] floatValue], [[array objectAtIndex:2] floatValue], [[array objectAtIndex:3] floatValue]))

#define SYSVER [[UIDevice currentDevice].systemVersion intValue]
#define IsIOS7 (SYSVER >= 7.0 && SYSVER < 8.0)
#define IsIOS8 (SYSVER >= 8.0 &&SYSVER < 9.0)
#define IsIOS9 (SYSVER >= 9.0 && SYSVER < 10.0)
#define IsIOS10 (SYSVER >= 10.0 && SYSVER < 11.0)
#define IsIOS7TO10 (SYSVER >= 7.0 && SYSVER < 11.0)
#define IsIOS8TO10 (SYSVER >= 8.0 && SYSVER < 11.0)
#define IsIOS9TO10 (SYSVER >= 9.0 && SYSVER < 11.0)
#define IsIOS7TO8 (SYSVER >= 7.0 && SYSVER < 9.0)
#define IsIOS7TO9 (SYSVER >= 7.0 && SYSVER < 10.0)
#define IsIOS8TO9 (SYSVER >= 8.0 && SYSVER < 10.0)
#define AboveIOS7 (SYSVER >= 7.0)
#define AboveIOS8 (SYSVER >= 8.0)
#define AboveIOS9 (SYSVER >= 9.0)
#define AboveIOS10 (SYSVER >= 10.0)

#define IOS7ViewFrameY20H20(view) if (IsIOS7TO10) {\
CGRect ios7Frame = view.frame; \
ios7Frame.origin.y += 20; \
ios7Frame.size.height -= 20; \
view.frame = ios7Frame; \
} \

#define IOS7ViewFrameY64H64(view) if (IsIOS7TO10) {\
CGRect ios7Frame = view.frame; \
ios7Frame.origin.y += 64; \
ios7Frame.size.height -= 64; \
view.frame = ios7Frame; \
} \

#define IOS7ViewFrameY20(view) if (IsIOS7TO10) {\
CGRect ios7Frame = view.frame; \
ios7Frame.origin.y += 20; \
view.frame = ios7Frame; \
} \

#define IOS7ViewFrameY64(view) if (IsIOS7TO10) {\
CGRect ios7Frame = view.frame; \
ios7Frame.origin.y += 64; \
view.frame = ios7Frame; \
} \


#define IOS7ViewFrameY88(view) if (IsIOS7TO10) {\
CGRect ios7Frame = view.frame; \
ios7Frame.origin.y += 88; \
view.frame = ios7Frame; \
} \

#ifdef DEBUG
#    define DLog(...) NSLog(__VA_ARGS__)
#else
#    define DLog(...) /* */
#endif
#define ALog(...) NSLog(__VA_ARGS__)

#define StringNotNil(x) (x ? x : @"")


#define IsPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define IsPhone ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)

#define UIScreenWidth [UIScreen mainScreen].bounds.size.width
#define UIScreenHeight [UIScreen mainScreen].bounds.size.height

#define Is3P5Inch (UIScreenHeight == 480 || UIScreenWidth == 480)
#define Is4Inch (UIScreenHeight == 568 || UIScreenWidth == 568)
#define Is4P7Inch (UIScreenHeight == 667 || UIScreenWidth == 667)
#define Is5P5Inch (UIScreenHeight == 736 || UIScreenWidth == 736)
#define IsPadPro (UIScreenHeight == 1366 || UIScreenWidth == 1366)

#define UIScreenFixWidth (IsPad ? (IsPadPro ? 1366 : 1024) : (Is5P5Inch ? 414 : (Is4P7Inch ? 375 : 320)))
#define UIScreenFixHeight (IsPad ? (IsPadPro ? 1024 : 768) : (Is5P5Inch ? 736 : (Is4P7Inch ? 667 : (Is4Inch ? 568 : 480))))

#define IsRetina ([[UIScreen mainScreen] scale] == 2.0)
#define IsRetinaScale3 ([[UIScreen mainScreen] scale] == 3.0)

#endif
