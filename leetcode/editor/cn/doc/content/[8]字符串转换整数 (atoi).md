<p>请你来实现一个&nbsp;<code>myAtoi(string s)</code>&nbsp;函数，使其能将字符串转换成一个 32 位有符号整数（类似 C/C++ 中的 <code>atoi</code> 函数）。</p>

<p>函数&nbsp;<code>myAtoi(string s)</code> 的算法如下：</p>

<ol> 
 <li>读入字符串并丢弃无用的前导空格</li> 
 <li>检查下一个字符（假设还未到字符末尾）为正还是负号，读取该字符（如果有）。 确定最终结果是负数还是正数。 如果两者都不存在，则假定结果为正。</li> 
 <li>读入下一个字符，直到到达下一个非数字字符或到达输入的结尾。字符串的其余部分将被忽略。</li> 
 <li>将前面步骤读入的这些数字转换为整数（即，"123" -&gt; 123， "0032" -&gt; 32）。如果没有读入数字，则整数为 <code>0</code> 。必要时更改符号（从步骤 2 开始）。</li> 
 <li>如果整数数超过 32 位有符号整数范围 <code>[−2<sup>31</sup>,&nbsp; 2<sup>31&nbsp;</sup>− 1]</code> ，需要截断这个整数，使其保持在这个范围内。具体来说，小于 <code>−2<sup>31</sup></code> 的整数应该被固定为 <code>−2<sup>31</sup></code> ，大于 <code>2<sup>31&nbsp;</sup>− 1</code> 的整数应该被固定为 <code>2<sup>31&nbsp;</sup>− 1</code> 。</li> 
 <li>返回整数作为最终结果。</li> 
</ol>

<p><strong>注意：</strong></p>

<ul> 
 <li>本题中的空白字符只包括空格字符 <code>' '</code> 。</li> 
 <li>除前导空格或数字后的其余字符串外，<strong>请勿忽略</strong> 任何其他字符。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例&nbsp;1：</strong></p>

<pre>
<strong>输入：</strong>s = "42"
<strong>输出：</strong>42
<strong>解释：</strong>加粗的字符串为已经读入的字符，插入符号是当前读取的字符。
第 1 步："42"（当前没有读入字符，因为没有前导空格）
         ^
第 2 步："42"（当前没有读入字符，因为这里不存在 '-' 或者 '+'）
         ^
第 3 步："<u>42</u>"（读入 "42"）
           ^
解析得到整数 42 。
由于 "42" 在范围 [-2<sup>31</sup>, 2<sup>31</sup> - 1] 内，最终结果为 42 。</pre>

<p><strong>示例&nbsp;2：</strong></p>

<pre>
<strong>输入：</strong>s = "   -42"
<strong>输出：</strong>-42
<strong>解释：</strong>
第 1 步："<u><strong>   </strong></u>-42"（读入前导空格，但忽视掉）
            ^
第 2 步："   <u><strong>-</strong></u>42"（读入 '-' 字符，所以结果应该是负数）
             ^
第 3 步："   <u><strong>-42</strong></u>"（读入 "42"）
               ^
解析得到整数 -42 。
由于 "-42" 在范围 [-2<sup>31</sup>, 2<sup>31</sup> - 1] 内，最终结果为 -42 。
</pre>

<p><strong>示例&nbsp;3：</strong></p>

<pre>
<strong>输入：</strong>s = "4193 with words"
<strong>输出：</strong>4193
<strong>解释：</strong>
第 1 步："4193 with words"（当前没有读入字符，因为没有前导空格）
         ^
第 2 步："4193 with words"（当前没有读入字符，因为这里不存在 '-' 或者 '+'）
         ^
第 3 步："<u>4193</u> with words"（读入 "4193"；由于下一个字符不是一个数字，所以读入停止）
             ^
解析得到整数 4193 。
由于 "4193" 在范围 [-2<sup>31</sup>, 2<sup>31</sup> - 1] 内，最终结果为 4193 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= s.length &lt;= 200</code></li> 
 <li><code>s</code> 由英文字母（大写和小写）、数字（<code>0-9</code>）、<code>' '</code>、<code>'+'</code>、<code>'-'</code> 和 <code>'.'</code> 组成</li> 
</ul>

<details><summary><strong>Related Topics</strong></summary>字符串</details><br>

<div>👍 1800, 👎 0<span style='float: right;'><span style='color: gray;'><a href='https://github.com/labuladong/fucking-algorithm/discussions/939' target='_blank' style='color: lightgray;text-decoration: underline;'>bug 反馈</a> | <a href='https://labuladong.gitee.io/article/fname.html?fname=jb插件简介' target='_blank' style='color: lightgray;text-decoration: underline;'>使用指南</a> | <a href='https://labuladong.online/algo/images/others/%E5%85%A8%E5%AE%B6%E6%A1%B6.jpg' target='_blank' style='color: lightgray;text-decoration: underline;'>更多配套插件</a></span></span></div>

<div id="labuladong"><hr>

**通知：算法可视化编辑器上线，[点击体验](https://labuladong.online/algo-visualize/)！**

<details><summary><strong>labuladong 思路</strong></summary>

## 基本思路

这道题说实话没有什么难度，无非就是处理数字、符号、空格和 int 溢出的细节问题，具体看代码吧，把每一步的注释写清楚就不容易在细节上出错了。

**标签：[数学](https://mp.weixin.qq.com/mp/appmsgalbum?__biz=MzAxODQxMDM0Mw==&action=getalbum&album_id=2122023604245659649)**

## 解法代码

提示：🟢 标记的是我写的解法代码，🤖 标记的是 chatGPT 翻译的多语言解法代码。如有错误，可以 [点这里](https://github.com/labuladong/fucking-algorithm/issues/1113) 反馈和修正。

<div class="tab-panel"><div class="tab-nav">
<button data-tab-item="cpp" class="tab-nav-button btn " data-tab-group="default" onclick="switchTab(this)">cpp🤖</button>

<button data-tab-item="python" class="tab-nav-button btn " data-tab-group="default" onclick="switchTab(this)">python🤖</button>

<button data-tab-item="java" class="tab-nav-button btn active" data-tab-group="default" onclick="switchTab(this)">java🟢</button>

<button data-tab-item="go" class="tab-nav-button btn " data-tab-group="default" onclick="switchTab(this)">go🤖</button>

<button data-tab-item="javascript" class="tab-nav-button btn " data-tab-group="default" onclick="switchTab(this)">javascript🤖</button>
</div><div class="tab-content">
<div data-tab-item="cpp" class="tab-item " data-tab-group="default"><div class="highlight">

```cpp
// 注意：cpp 代码由 chatGPT🤖 根据我的 java 代码翻译，旨在帮助不同背景的读者理解算法逻辑。
// 本代码已经通过力扣的测试用例，应该可直接成功提交。

class Solution {
public:
    int myAtoi(string str) {
        int n = str.length();
        int i = 0;
        // 记录正负号
        int sign = 1;
        // 用 long 避免 int 溢出
        long res = 0;
        // 跳过前导空格
        while (i < n && str[i] == ' ') {
            i++;
        }
        if (i == n) {
            return 0;
        }

        // 记录符号位
        if (str[i] == '-') {
            sign = -1;
            i++;
        } else if (str[i] == '+') {
            i++;
        }
        if (i == n) {
            return 0;
        }

        // 统计数字位
        while (i < n && '0' <= str[i] && str[i] <= '9') {
            res = res * 10 + str[i] - '0';
            if (res > INT_MAX) {
                break;
            }
            i++;
        }
        // 如果溢出，强转成 int 就会和真实值不同
        if ((int) res != res) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        return (int) res * sign;
    }
};
```

</div></div>

<div data-tab-item="python" class="tab-item " data-tab-group="default"><div class="highlight">

```python
# 注意：python 代码由 chatGPT🤖 根据我的 java 代码翻译，旨在帮助不同背景的读者理解算法逻辑。
# 本代码已经通过力扣的测试用例，应该可直接成功提交。

class Solution:
    def myAtoi(self, str: str) -> int:
        n = len(str)
        i = 0
        # 记录正负号
        sign = 1
        # 用 long 避免 int 溢出
        res = 0
        # 跳过前导空格
        while i < n and str[i] == ' ':
            i += 1
        if i == n:
            return 0

        # 记录符号位
        if str[i] == '-':
            sign = -1
            i += 1
        elif str[i] == '+':
            i += 1
        if i == n:
            return 0

        # 统计数字位
        while i < n and '0' <= str[i] <= '9':
            res = res * 10 + ord(str[i]) - ord('0')
            if res > 2 ** 31 - 1:
                break
            i += 1
        # 如果溢出，强转成 int 就会和真实值不同
        if res != int(res):
            return sign * (2 ** 31 - 1) if sign == 1 else -2 ** 31
        return int(res) * sign
```

</div></div>

<div data-tab-item="java" class="tab-item active" data-tab-group="default"><div class="highlight">

```java
class Solution {
    public int myAtoi(String str) {
        int n = str.length();
        int i = 0;
        // 记录正负号
        int sign = 1;
        // 用 long 避免 int 溢出
        long res = 0;
        // 跳过前导空格
        while (i < n && str.charAt(i) == ' ') {
            i++;
        }
        if (i == n) {
            return 0;
        }

        // 记录符号位
        if (str.charAt(i) == '-') {
            sign = -1;
            i++;
        } else if (str.charAt(i) == '+') {
            i++;
        }
        if (i == n) {
            return 0;
        }

        // 统计数字位
        while (i < n && '0' <= str.charAt(i) && str.charAt(i) <= '9') {
            res = res * 10 + str.charAt(i) - '0';
            if (res > Integer.MAX_VALUE) {
                break;
            }
            i++;
        }
        // 如果溢出，强转成 int 就会和真实值不同
        if ((int) res != res) {
            return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
        }
        return (int) res * sign;
    }
}
```

</div></div>

<div data-tab-item="go" class="tab-item " data-tab-group="default"><div class="highlight">

```go
// 注意：go 代码由 chatGPT🤖 根据我的 java 代码翻译，旨在帮助不同背景的读者理解算法逻辑。
// 本代码已经通过力扣的测试用例，应该可直接成功提交。

import "math"

func myAtoi(str string) int {
    n := len(str)
    i := 0
    // 记录正负号
    sign := 1
    // 用 long 避免 int 溢出
    var res int64 = 0
    // 跳过前导空格
    for i < n && str[i] == ' ' {
        i++
    }
    if i == n {
        return 0
    }
    // 记录符号位
    if str[i] == '-' {
        sign = -1
        i++
    } else if str[i] == '+' {
        i++
    }
    if i == n {
        return 0
    }
    // 统计数字位
    for i < n && '0' <= str[i] && str[i] <= '9' {
        res = res * 10 + int64(str[i]-'0')
        if res > math.MaxInt32 {
            break
        }
        i++
    }
    // 如果溢出，强转成 int 就会和真实值不同
    if res > math.MaxInt32 {
        if sign == 1 {
            return math.MaxInt32
        } else {
            return math.MinInt32
        }
    }
    return int(res) * sign
}
```

</div></div>

<div data-tab-item="javascript" class="tab-item " data-tab-group="default"><div class="highlight">

```javascript
// 注意：javascript 代码由 chatGPT🤖 根据我的 java 代码翻译，旨在帮助不同背景的读者理解算法逻辑。
// 本代码已经通过力扣的测试用例，应该可直接成功提交。

var myAtoi = function(str) {
    var n = str.length;
    var i = 0;
    // 记录正负号
    var sign = 1;
    // 用 long 避免 int 溢出
    var res = 0;
    // 跳过前导空格
    while (i < n && str.charAt(i) == ' ') {
        i++;
    }
    if (i === n) {
        return 0;
    }

    // 记录符号位
    if (str.charAt(i) == '-') {
        sign = -1;
        i++;
    } else if (str.charAt(i) == '+') {
        i++;
    }
    if (i === n) {
        return 0;
    }

    // 统计数字位
    while (i < n && '0' <= str.charAt(i) && str.charAt(i) <= '9') {
        res = res * 10 + str.charAt(i) - '0';
        if (res > 2147483647) {
            break;
        }
        i++;
    }
    // 如果溢出，强转成 int 就会和真实值不同
    if (Math.trunc(res) !== res) {
        return sign === 1 ? 2147483647 : -2147483648;
    }
    return res * sign;
};
```

</div></div>
</div></div>

<hr /><details open hint-container details><summary style="font-size: medium"><strong>🥳🥳 算法可视化 🥳🥳</strong></summary><div id="data_string-to-integer-atoi" data="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"></div><div class="resizable aspect-ratio-container" style="height: 100%;">
<div id="iframe_string-to-integer-atoi"></div></div>
</details><hr /><br />

**类似题目**：
  - [面试题67. 把字符串转换成整数 🟠](/problems/ba-zi-fu-chuan-zhuan-huan-cheng-zheng-shu-lcof)

</details>
</div>

