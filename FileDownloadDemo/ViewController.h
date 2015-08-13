//
//  ViewController.h
//  FileDownloadDemo
//
//  Created by Apple on 8/13/15.
//  Copyright (c) 2015 华讯网络投资有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSURLConnectionDataDelegate>{
    NSMutableData *_data;//响应数据
    UITextField *_textField;
    UIButton *_button;
    UIProgressView *_progressView;
    UILabel *_label;
    long long _totalLength;
}
@end

